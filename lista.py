class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def print_list(head, limit=100):
    current = head
    count = 0
    while current and count < limit:
        print(f"{current.data} -> ", end="")
        current = current.next
        count += 1
    print("...")

def main():
    head = Node(0)
    current = head

    # Crear 10 millones de nodos
    for i in range(1, 10_000_000):
        new_node = Node(i)
        current.next = new_node
        current = new_node

    # Imprimir solo los primeros 100 nodos para evitar saturar la consola
    print_list(head)

if __name__ == "__main__":
    main()
