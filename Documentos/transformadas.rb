class Transfor
	def initialize()
	end
	def inicio()
		arregloOriginal=[[],[]]
		arregloTrasla=[[],[]]
		arregloRota=[[],[]]
		arregloEscala=[[],[]]
		tras=[0,0]
		esca=[0,0]
		puts "Introduce el numero de lados de la figura"
		lados=gets.chomp.to_i
		n=lados-1
		#llenado de valores de traslacion 
		puts "Introduce los valores de traslacion"
		puts "x"
		tras[0]=gets.chomp.to_i
		puts "y"
		tras[1]=gets.chomp.to_i
		#llenado de valores de escalamiento
		puts "Introduce los valores de escalamiento"
		puts "x"
		esca[0]=gets.chomp.to_i
		puts "y"
		esca[1]=gets.chomp.to_i
		#llenado de valores de rotacion
		puts "Introduce los valores de rotacion del angulo"
		rota=gets.chomp.to_i
		cosA=Math.cos(rota)
		sinA=Math.sin(rota)
		
		#llenado de los puntos de la figura
		0.upto(n) do |i|
		#valores en x
			puts "Introduce  el  valor de x"+(i+1).to_s
			arregloOriginal[0][i]=gets.chomp.to_i
			arregloTrasla[0][i]=arregloOriginal[0][i]+tras[0]
			arregloEscala[0][i]=arregloOriginal[0][i]*esca[0]
			
			#valores en y
			puts "Introduceel valor de y"+(i+1).to_s
			arregloOriginal[1][i]=gets.chomp.to_i
			arregloTrasla[1][i]=arregloOriginal[1][i]+tras[1]
			arregloEscala[1][i]=arregloOriginal[1][i]*esca[1]
			arregloRota[0][i]=(arregloOriginal[0][i] * cosA) +(- (arregloOriginal[1][i] * sinA))
			arregloRota[1][i]=(arregloOriginal[0][i] * sinA) + (arregloOriginal[1][i] * cosA)
		end
		print arregloOriginal
		puts 
		print arregloTrasla
		puts
		print arregloEscala
		puts 
		print arregloRota
		
	end
end
objeto = Transfor.new()
objeto.inicio
gets()