SELECT products.id , products.name
FROM products, categories
WHERE id_categories = categories.id AND categories.name LIKE 'super%';