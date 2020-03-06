#' get threads
#'
#' @description \code{\link{get_nthreads}} displays environment info
#' @useDynLib  openmpf, .registration = TRUE
#' @export
get_n <- function() {
  a <-   .Fortran("getn")
  return(a)

}
