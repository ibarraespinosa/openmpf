#' get info
#'
#' @description \code{\link{get_info}} displays environment info
#' @useDynLib  openmpf, .registration = TRUE
#' @export
get_info <- function() {
  a <-   .Fortran("getinfo")
  return(a)

}
