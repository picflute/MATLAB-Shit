t =0:.25:8;
x1 = exp(-.5 * t);
x2 = exp(-3.0 * t);
%plot(t,x1,'g',t,x2,'b');
xlabel('Time');
ylabel('Value');
    
%P1(t) ω0 = 0.5π and θ = 0
subplot(311);
t2 = 0:.25:5;
p1 = sin(0.5 * pi * t2);
plot(p1,t2);
subplot(312);
p2 = sin(1.2 * pi * t2);
plot(p2,t2);
subplot(313);
p3= sin(
