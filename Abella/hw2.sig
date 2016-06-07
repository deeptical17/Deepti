sig hw2.

kind typ type.
kind exp type.

type unit typ.
type prod typ -> typ -> typ.
type void typ.
type sum typ -> typ -> typ.
type arr typ -> typ -> typ.
type ind (typ -> typ) -> typ.
type coi (typ -> typ) -> typ.

type triv exp.
type pair exp -> exp -> exp.
type prl exp -> exp.
type prr exp -> exp.
type abort typ -> exp -> exp.
type inl typ -> typ -> exp -> exp.
type inr typ -> typ -> exp -> exp.
type case exp -> (exp -> exp) -> (exp -> exp) -> exp.
type lam typ -> (exp -> exp) -> exp.
type app exp -> exp -> exp.
type map (typ -> typ) -> typ -> typ -> (exp -> exp) -> exp -> exp.
type fold (typ -> typ) -> exp -> exp.
type rec (typ -> typ) -> typ -> (exp -> exp) -> exp -> exp.
type unfold (typ ->  typ) -> exp -> exp.
type gen (typ -> typ) -> typ  -> (exp -> exp) -> exp -> exp.

type typ typ -> o.
type pos (typ -> typ) -> o.
type of exp -> typ -> o.

type val exp -> o.
type step exp -> exp -> o.





