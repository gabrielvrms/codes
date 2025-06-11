%Program: Matlab

%Author: Gabriel Ramos

%Date: 21/04/2025

%Description: Calculo da area e contorno de um circulo e um retangulo

%License: CC BY-NC-SA

  % In this code you have to click above the figure
  set(gcf,'CurrentCharacter',' ') % empty current character
  while true
      pos = get(0, 'PointerLocation');
      x = pos(1);
      y = pos(2);
      fprintf('Mouse Position: x=%d, y=%d\n', x, y);

      figure(1)
      % Adjust the delay as needed
      tic
      while toc<0.01
          ch = get(gcf,'CurrentCharacter');
      end
      if(ch=='c')
          break
      end
  end
