! { dg-do compile }
!
implicit none
abstract interface :: one ! { dg-error "Syntax error in ABSTRACT INTERFACE statement" }
end interface ! { dg-error "Expecting END PROGRAM statement" }

abstract interface
  subroutine two() bind(C)
  end subroutine two
  subroutine three() bind(C,name="three") ! { dg-error "NAME not allowed on BIND.C. for ABSTRACT INTERFACE" }
  end subroutine three ! { dg-error "Expecting END INTERFACE statement" }
  subroutine real() ! { dg-error "cannot be be the same as an intrinsic type" }
  end subroutine real
end interface
end
