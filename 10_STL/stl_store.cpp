#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <deque>
#include <list>
#include <map>
#include <set>

using namespace std;

// Product Structure
struct Product {
    int productID;
    string name;
    string category;
};

// Order Structure
struct Order {
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main() {
    // Products
    vector<Product> products = {
        {101, "Mac Book Air M1", "Electronics"},
        {102, "HP 840 G5", "Electronics"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"},
    };

    // Display products
    cout << "Products List:\n";
    for (const auto &product : products) {
        cout << "ID: " << product.productID << ", Name: " << product.name
             << ", Category: " << product.category << endl;
    }
    cout << endl;

    // Recent customers
    deque<string> recentCustomers = {"C001", "C002", "C003"};
    recentCustomers.push_front("C004");
    recentCustomers.push_back("C005");

    cout << "Recent Customers:\n";
    for (const auto &customer : recentCustomers) {
        cout << customer << " ";
    }
    cout << "\n\n";

    // Order history
    list<Order> orderHistory = {
        {1, 101, 2, "C001", time(0)},
        {2, 102, 1, "C002", time(0)},
        {3, 103, 6, "C003", time(0)},
    };

    cout << "Order History:\n";
    for (const auto &order : orderHistory) {
        cout << "Order ID: " << order.orderID << ", Product ID: " << order.ProductID
             << ", Quantity: " << order.quantity << ", Customer ID: " << order.customerID
             << ", Order Date: " << ctime(&order.orderDate);
    }
    cout << endl;

    // Categories
    set<string> categories;
    for (const auto &product : products) {
        categories.insert(product.category);
    }

    cout << "Product Categories:\n";
    for (const auto &category : categories) {
        cout << category << endl;
    }
    cout << endl;

    // Product stock
    map<int, int> productStock = {
        {101, 23},
        {102, 40},
        {103, 30},
        {104, 5},
        {105, 10},
    };

    cout << "Product Stock:\n";
    for (const auto &stock : productStock) {
        cout << "Product ID: " << stock.first << ", Stock: " << stock.second << endl;
    }
    cout << endl;

    // Customer orders
    multimap<string, Order> customerOrders;
    for (const auto &order : orderHistory) {
        customerOrders.insert({order.customerID, order});
    }

    cout << "Customer Orders:\n";
    for (const auto &[customerID, order] : customerOrders) {
        cout << "Customer ID: " << customerID << ", Order ID: " << order.orderID
             << ", Product ID: " << order.ProductID << ", Quantity: " << order.quantity
             << ", Order Date: " << ctime(&order.orderDate);
    }
    cout << endl;

    // Customer data
    unordered_map<string, string> customerData = {
        {"C001", "Alisa"},
        {"C002", "Bob"},
        {"C003", "Jouly"},
        {"C004", "Ali"},
        {"C005", "Kalam"},
    };

    cout << "Customer Data:\n";
    for (const auto &[id, name] : customerData) {
        cout << "Customer ID: " << id << ", Name: " << name << endl;
    }
    cout << endl;

    // Unique product IDs
    unordered_set<int> uniqueProductIDs;
    for (const auto &product : products) {
        uniqueProductIDs.insert(product.productID);
    }

    cout << "Unique Product IDs:\n";
    for (const auto &id : uniqueProductIDs) {
        cout << id << " ";
    }
    cout << endl;

    return 0;
}
