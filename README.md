# Spiral Matrix Traversal

A C program that reads a 2D integer matrix and prints its elements in **clockwise spiral order**, followed by a symbolic representation (`*` for odd, `#` for even numbers).

Designed for correctness, clarity, and portability — adheres to strict output formatting requirements (no trailing spaces).

---

## 📥 Input Format

- `n`: number of rows  
- `m`: number of columns  
- All `aᵢⱼ` are integers.

---

## 📤 Output Format

- **Line 1**: Elements in spiral order, space-separated  
- **Line 2**: Corresponding symbols (`*` if odd, `#` if even), same spacing  

✅ **No trailing space** at the end of either line.

---


---

## 🛠️ Algorithm

- Uses **boundary-based spiral traversal**:
  - Four pointers: `top`, `bottom`, `left`, `right`
  - Traverses layers in order:  
    → top row (left→right)  
    ↓ right column (top→bottom)  
    ← bottom row (right→left)  
    ↑ left column (bottom→top)  
- Stores traversal in a 1D buffer to support dual-output requirement (values + symbols).
- Handles all matrix shapes (e.g., `1×N`, `N×1`, square, rectangular).

---

## ⚙️ Build & Run

```bash
gcc -std=c99 -O2 -Wall spiral.c -o spiral
./spiral < input.txt
