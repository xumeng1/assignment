package com;
public class Circle extends Shape {
	private double r;
	private double Area;
	public Circle (double r) {
		this.r=r;
	}
	public double CalculateArea(){
		Area=Math.PI*r*r;
		System.out.println(Area);
		return Area;
	}
}
