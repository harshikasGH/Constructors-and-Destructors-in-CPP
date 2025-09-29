Constructors & Destructors in C++

Aim  
To understand, use, and implement **C++ Constructors** and **Destructors**, exploring their role in **object initialization**, **cleanup**, and **lifecycle management**.

Theory  
In C++, **constructors** and **destructors** are special member functions that manage the **lifecycle of an object** — from creation to destruction.

Constructor  
A **constructor** is a special member function that is **automatically invoked** when an object of a class is created.  
Its main purpose is to **initialize the object’s data members** and ensure it starts in a valid state.

**Key Characteristics:**
- **Name:** Same as the class name.
- **Return type:** None (not even `void`).
- **Automatic call:** Invoked when an object is created.
- **Overloading:** Multiple constructors can exist with different parameter lists.
- **Access specifier:** Usually `public` for object creation.

**Types of Constructors:**
1. **Default Constructor** – No parameters; sets default or user‑input values.
2. **Parameterized Constructor** – Accepts arguments to set specific values.
3. **Copy Constructor** – Creates a new object as a copy of an existing object.
4. **Delegating Constructor** *(C++11+)* – Calls another constructor in the same class.
5. **Explicit Constructor** – Prevents implicit conversions.

Destructor  
A **destructor** is a special member function that is **automatically invoked** when an object’s lifetime ends.  
Its main purpose is to **release resources** acquired during the object’s existence.

**Key Characteristics:**
- **Name:** Same as the class name but prefixed with `~`.
- **Return type:** None.
- **Parameters:** None.
- **Overloading:** Not allowed — only one destructor per class.

**Responsibilities:**
- Free dynamically allocated memory.
- Close files or network connections.
- Release locks or other system resources.
- Perform logging or cleanup tasks.

**Order of Destruction:**
- Local objects: destroyed in reverse order of creation when scope ends.
- Global/static objects: destroyed in reverse order of construction at program termination.
- Inheritance: derived class destructor runs first, then base class destructor.

Constructor–Destructor Lifecycle  
1. **Memory Allocation** (if dynamic).
2. **Constructor Call** → Initialization.
3. **Object Usage** → Program logic.
4. **Destructor Call** → Cleanup.
5. **Memory Deallocation** (if dynamic).

This follows the **RAII** principle (*Resource Acquisition Is Initialization*), ensuring safe and automatic resource management.

Algorithms  
Destructor with Global Counter  
1. **Start**  
2. Declare a global integer `count = 0` to track the number of objects.  
3. Define a class `Student` with:  
   - **Constructor:** Increment `count` and display `"No of objects created: "` followed by `count`.  
   - **Destructor:** Decrement `count` and display `"No of objects destroyed: "` followed by the updated `count`.  
4. In `main()`:  
   - Create three objects: `aa`, `bb`, `cc`.  
   - Enter a nested scope `{}`:  
     - Create one object `dd`.  
     - When scope ends, `dd` is destroyed and destructor runs.  
   - At the end of `main()`, `cc`, `bb`, and `aa` are destroyed in reverse order.  
5. **End**

Copy Constructor  
1. **Start**  
2. Define a class `Student` with private members: `name`, `age`, `roll_no`.  
3. Create a parameterized constructor to initialize these members.  
4. Create a copy constructor that:  
   - Copies values from another `Student` object.  
   - Displays `"Copy constructor called!"`.  
5. Create a `display()` method to print the object’s details.  
6. In `main()`:  
   - Create object `s1` using the parameterized constructor.  
   - Display `s1`’s details.  
   - Create object `s2` as a copy of `s1` (invokes copy constructor).  
   - Display `s2`’s details.  
7. **End**

Parameterized Constructor
1. **Start**  
2. Define a class `Date` with private members: `d`, `m`, `y`.  
3. Create a parameterized constructor that:  
   - Accepts `day`, `month`, `year` as arguments.  
   - Assigns them to `d`, `m`, `y`.  
4. Create a `display()` method to print the date in `d/m/y` format.  
5. In `main()`:  
   - Prompt the user to enter day, month, and year.  
   - Create object `d1` using the parameterized constructor.  
   - Call `display()` to show the date.  
6. **End**

Default Constructor
1. **Start**  
2. Define a class `Student` with private members: `name`, `fee`.  
3. Create a default constructor that:  
   - Prompts the user to enter the student’s name.  
   - Prompts the user to enter the fee.  
   - Stores these values in the object’s members.  
4. Create a `display()` method to print the stored details.  
5. In `main()`:  
   - Create object `s` (default constructor runs automatically).  
   - Call `display()` to show the details.  
6. **End**

Basic Constructor & Destructor Lifecycle  
1. **Start**  
2. Define a class with:  
   - **Constructor:** Displays a message when an object is created.  
   - **Destructor:** Displays a message when an object is destroyed.  
3. In `main()`:  
   - Create one or more objects to trigger constructor calls.  
   - Optionally, create objects inside a nested scope to see early destruction.  
   - Observe that destructors are called in reverse order of creation.  
4. **End**

Conclusion  
This experiment demonstrates the importance of **constructors and destructors** in managing the lifecycle of C++ objects.  

- **Constructors** → Ensure proper initialization.  
- **Destructors** → Ensure proper cleanup.  
- Key Insights:  
  - Different constructor types serve different initialization needs.  
  - Destructors are crucial for resource management.  
  - Together, they implement **RAII** for safer, cleaner code.
