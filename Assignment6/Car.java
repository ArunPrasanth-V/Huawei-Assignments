package Assignment6;

public class Car {
   private String color;
   private int model;
   private String bodyType;
   private String fuelType;
   
	@Override
public String toString() {
	return "Car [color=" + color + ", model=" + model + ", bodyType=" + bodyType + ", fuelType=" + fuelType + "]";
}

	public String getColor() {
	return color;
}

public void setColor(String color) {
	this.color = color;
}

public int getModel() {
	return model;
}

public void setModel(int model) {
	this.model = model;
}

public String getBodyType() {
	return bodyType;
}

public void setBodyType(String bodyType) {
	this.bodyType = bodyType;
}

public String getFuelType() {
	return fuelType;
}

public void setFuelType(String fuelType) {
	this.fuelType = fuelType;
}

	public Car(String color, int model, String bodyType, String fuelType) {
	super();
	this.color = color;
	this.model = model;
	this.bodyType = bodyType;
	this.fuelType = fuelType;
}

}
