---

## **3️⃣ Documentation.md**  

```markdown
# Airport Management System – Documentation

## 1. Introduction
This project simulates airport flight handling using **stacks implemented with linked lists**.  
Flights waiting to **land** or **depart** are managed using **LIFO (Last In First Out)**.

---

## 2. Objective
- Implement stack operations (push, pop) using linked lists.  
- Simulate real-life airport runway management.  
- Demonstrate dynamic memory usage in C.  

---

## 3. Modules
### Landing Stack
- Push → Add flight waiting to land  
- Pop → Land flight  

### Departure Stack
- Push → Add flight waiting to depart  
- Pop → Depart flight  

### Display
- Shows all flights in landing and departure stacks  

---

## 4. Algorithm
### Push Operation
Create new node
Assign flight code
Link new node to top
Update top pointer

### Pop Operation

Check if stack empty → Underflow
Else remove top node
Update top pointer
---

## 5. Real-Life Applications
- Holding pattern for landing  
- Last-arrived flight priority  
- Emergency runway queueing  
- Managing runway traffic efficiently  

---

## 6. Conclusion
The project demonstrates **dynamic stack operations** in a real-life airport scenario using **linked lists**.