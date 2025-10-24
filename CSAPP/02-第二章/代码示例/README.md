# 第二章代码示例

## 📋 目录说明

本文件夹存放第二章相关的代码示例，用于验证和理解数据表示、整数运算、浮点数等概念。

## 🎯 示例分类

### 数据表示示例
- [ ] `binary_representation.c` - 二进制表示演示
- [ ] `hex_conversion.c` - 十六进制转换工具
- [ ] `endian_test.c` - 字节序检测程序

### 整数运算示例
- [ ] `integer_overflow.c` - 整数溢出演示
- [ ] `bit_operations.c` - 位运算示例
- [ ] `signed_unsigned.c` - 有符号/无符号整数比较

### 浮点数示例
- [ ] `float_precision.c` - 浮点数精度问题演示
- [ ] `ieee_representation.c` - IEEE浮点数表示分析
- [ ] `rounding_errors.c` - 舍入误差分析

### 字符编码示例
- [ ] `ascii_encoding.c` - ASCII编码演示
- [ ] `unicode_test.c` - Unicode字符处理
- [ ] `encoding_conversion.c` - 编码转换工具

## 💡 使用说明

### 编译运行
```bash
# 编译单个文件
gcc example.c -o example

# 运行程序
./example

# 使用调试器查看内存
gcc -g example.c -o example
gdb example
```

### 数据查看工具
```bash
# 查看二进制表示
xxd example.bin

# 查看内存布局
objdump -t example

# 浮点数分析
python3 -c "import struct; print(struct.pack('f', 3.14))"
```

## 📊 文件命名规范

- 使用描述性的英文文件名
- 文件名反映示例的主要功能
- 复杂示例可以创建子文件夹组织

## 🔄 更新日志

- 2024-01-01: 创建文件夹结构
- 后续根据学习进度添加具体示例

---

**提示**: 在学习过程中，将验证数据表示和运算概念的代码示例保存到此文件夹中。