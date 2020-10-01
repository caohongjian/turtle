# turtle

乌龟绘图

## 特点

1. lua 支持
2. 软光栅
3. 矢量绘图

## example

```lua
p = ctx.create_pen(); // 创建一个画笔

p.move_to(10, 20); // 设置起点
p.line_to(50, 60); // 连线

ctx.render(p, "turtle.png", 640, 480); // 渲染并输出
```

## API
