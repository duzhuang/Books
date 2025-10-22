# 第一章代码示例

## 📋 目录说明

本文件夹存放第一章相关的代码示例，用于验证和理解章节中的概念。

## 🎯 示例分类

### 基础示例
- [ ] `hello_world.c` - 最简单的C程序
- [ ] `compile_steps.c` - 演示编译各阶段的示例
- [ ] `memory_layout.c` - 程序内存布局示例

### 性能对比示例
- [ ] `switch_vs_ifelse.c` - switch与if-else性能对比
- [ ] `pointer_vs_array.c` - 指针与数组访问性能对比
- [ ] `local_vs_reference.c` - 本地变量与引用参数性能对比

### 系统调用示例
- [ ] `system_call.c` - 系统调用过程演示
- [ ] `file_io.c` - 文件I/O操作示例

## 💡 使用说明

### 编译运行
```bash
# 编译单个文件
gcc example.c -o example

# 运行程序
./example

# 查看汇编代码
gcc -S example.c -o example.s
```

### 性能测试
```bash
# 使用time命令测量运行时间
time ./example

# 使用perf进行性能分析
perf stat ./example
```

## 📊 文件命名规范

- 使用描述性的英文文件名
- 文件名反映示例的主要功能
- 复杂示例可以创建子文件夹组织

## 🔄 更新日志

- 2024-01-01: 创建文件夹结构
- 后续根据学习进度添加具体示例

---

**提示**: 在学习过程中，将验证章节概念的代码示例保存到此文件夹中。