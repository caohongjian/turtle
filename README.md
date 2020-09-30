# turtle

乌龟绘图

## 实现

1. 执行 lua 脚本，生成多边形
2. 渲染图形
3. 输出到图片

## example

```lua
p = ctx.create_pen(); // 创建一个画笔

p.move_to(10, 20); // 设置起点
p.line_to(50, 60); // 连线

ctx.render(p, "turtle.png", 640, 480); // 渲染并输出
```

## API
