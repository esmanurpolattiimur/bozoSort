
# Bozo Sort Algoritması

## 🔍 Algoritmanın Ne Yaptığı
Bozo Sort, sıralama algoritmaları kategorisinde yer alan, rastgelelik temelli bir algoritmadır. Amaç, listeyi rastgele eleman değişimleriyle sıralı hale getirmektir.

- **Kategori:** Sıralama algoritması
- **Çözüm Yaklaşımı:** Brute Force (Zorlayıcı - rastgele deneme)

---

## 📅 Ne Zaman ve Neden Kullanıldığı
Bozo Sort pratikte kullanılmaz. Algoritma teorisi derslerinde verimsiz algoritma örneği olarak kullanılır. Ayrıca sıralama algoritmalarının verimliliğini öğretmek için mizahi amaçlı sunulur.

---

## 📈 Karmaşıklık Analizi (Zaman ve Uzay)

| Durum            | Zaman Karmaşıklığı |
|------------------|--------------------|
| En iyi durum     | O(n)               |
| Ortalama durum   | O(n!)              |
| En kötü durum    | Sonsuz olabilir    |

- **Uzay karmaşıklığı:** O(1) (in-place çalışır)

---

## 🧮 Algoritmanın Adımları

1. Listenin sıralı olup olmadığını kontrol et.
2. Eğer sıralı değilse, rastgele iki eleman seç.
3. Bu iki elemanın yerini değiştir.
4. Adım 1’e geri dön.

---

## 🧪 Kullanım Yeterine Ait Örnekler

### Python Örneği

```python
import random

def is_sorted(arr):
    return all(arr[i] <= arr[i + 1] for i in range(len(arr) - 1))

def bozo_sort(arr):
    arr = arr[:]  # Orijinal listeyi koru
    while not is_sorted(arr):
        i, j = random.sample(range(len(arr)), 2)
        arr[i], arr[j] = arr[j], arr[i]
    return arr

# Örnek kullanım
liste = [3, 2, 1]
print("Sıralanmadan önce:", liste)
sirali = bozo_sort(liste)
print("Sıralandıktan sonra:", sirali)
```

---

## ✅ Avantajları ve ❌ Dezavantajları

### ✅ Avantajları
- Uygulaması çok basittir.
- Öğretici ve eğlenceli amaçlarla kullanılır.

### ❌ Dezavantajları
- Aşırı verimsizdir.
- Büyük veri kümelerinde kesinlikle kullanılmaz.
- Belirsiz çalışma süresi olabilir (asla sonlanmayabilir).

---

> ⚠️ **Uyarı:** Bozo Sort gerçek dünyada **kullanılmamalıdır**. Bu algoritma sadece öğretici amaçla veya algoritma analizinde karşılaştırma yapmak için kullanılır.
