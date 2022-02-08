%exemplo de uso: numeletra([1, b, 2, a],C,I).

numeletra([ ],[ ],[ ]).
numeletra([X|T], Char, Int) :- numeletra(T, C, I), (atom(X) ->  sortC([X|C], Char) ; Char = C), (integer(X) -> sortI([X|I], Int) ; Int = I).
numeletra([_|T], Char, Int) :- numeletra(T,Char,Int).

insertC(X, [], [X]):- !.
insertC(X, [X1|L1], [X, X1|L1]):- X@<X1, !.
insertC(X, [X1|L1], [X1|L]):- insertC(X, L1, L).
sortC([], []):- !.
sortC([X|L], S):- sortC(L, S1), insertC(X, S1, S).

insertI(X, [], [X]):- !.
insertI(X, [X1|L1], [X, X1|L1]):- X>=X1, !.
insertI(X, [X1|L1], [X1|L]):- insertI(X, L1, L).
sortI([], []):- !.
sortI([X|L], S):- sortI(L, S1), insertI(X, S1, S).