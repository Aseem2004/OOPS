# OOPS

<ul>
<li><b>Object Oriented Programing:</b>
Better way of writing code, implemented in real world problems. The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.</li><br>

<li><b>Objects: </b>Entities in the real world. It has properties/attributes and member functions/methods that the object of the class would contain. They can be accessed and used by creating an instance of that class.</li><br>

<li><b>Class: </b>Blueprint of the entities
<br>
A blueprint for a house design is like a class description. All the houses built from that blueprint are objects of that class. A given house is an instance.</li><br>

<li><b>Access Modifiers:</b>
<ol>
<li>Private:data and methods accessible inside class.</li>
<li>Public:data and methods accessible everywhere.</li>
<li>Protected:data and methods accessible inside class and to its derived class.</li>
</ol>
</li><br>

<li><b>Encapsulation:</b>
It is the wrapping up of data and member functions in a single unit called class. It is used for data hiding by specifying private access modifier.</li>
<br>

<li><b>Constructors:</b>
Special method invoked automatically at time of object creation. Used for initialisation of certain data.
  <ul>
    <li>Same name as class.</li>
    <li>Only called once, at time of object creation(automatic).</li>
    <li>Doesn't have a return type.</li>
    <li>Used for memory allocation, as class does't occupy space but when an object is created, it does.</li>
    <li>Three types of construtors:
      <ul>
        <li>Non-parameterized: No parameters inside the constructor are specified.</li>
        <li>Parameterized: Any number of parameters are specified.<br>
        ---> this pointer: Special pointer in C++ pointing towards current object.
          <br>
          &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp
          this->prop same as*(this).prop.
        </li>
        <li>Copy: Used to copy properties of one object into another.</li>
      </ul>
    </li>
    <li>Shallow Copy: Copies all of the member values from one object to another.</li>
    <li>Deep Copy: Not only copies the member values but also makes copies of dynamically allocated memory that pointer points to. It creates a copy of that memory in heap so that changes in one doesn't reflect in changes in another.</li>
  </ul>
</li>
<br>
<li><b>Destructor:</b> Used to deallocate memory. Automatically called up for shallow copies. For deep copies need to use the 'delete' keyword for freeing up memory allocated at run time.</li>
<br>
<li><b>Inheritance:</b>When properties and member functions of base/parent class are passed to derived/child class.</li>
<ul>
<li>Constructors of parent class are invoked first, then of child class.</li>
<li>Destructors of child class are invoked first, then of parent class.</li>
<li>Modes of inheritance:
<table>
<tr>
<td></td>
<td>Derived Class</td>
<td>Derived Class</td>
<td>Derived Class</td>
</tr>
<tr>
<td>Base Class</td>
<td>Private Mode</td>
<td>Protected Mode</td>
<td>Public Mode</td>
</tr>
<tr>
<td>Private Mode</td>
<td>No inheritance</td>
<td>No inheritance</td>
<td>No inheritance</td>
</tr>
<tr>
<td>Protected Mode</td>
<td>Private</td>
<td>Protected</td>
<td>Protected</td>
</tr>
<tr>
<td>Public Mode</td>
<td>Private</td>
<td>Protected</td>
<td>Public</td>
</tr>
</table>
</li>
<li>
Types of inheritance:
<ul>
<li>Single Inheritance: Parent-->Child</li>
<li>Multi level Inheritance: Parent->Parent-->Child</li>
<li>Multiple Inheritance: Parent+Parent-->Child</li>
<li>Hierarchical Inheritance: Parent-->Child+Child</li>
<li>Hybrid Inheritance: Mix of all categories</li>
</ul>
</li>
</ul>
</ul>