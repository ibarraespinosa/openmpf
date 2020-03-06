#' hello from thread
#'
#' @description \code{\link{hellor}} displays Hello World from availables thread
#' @useDynLib  openmpf, .registration = TRUE
#' @export
hellor <- function() {
  a <-   .Fortran("hello")
  return(a)

}
