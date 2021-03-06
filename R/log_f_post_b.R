#' @importFrom stats dgamma
#' 

log_f_post_b <- function( b,
                          a,
                          d_0_b,d_1_b,
                          mu_star_n_r ) {
  
  ###     Metropolis-Hastings for 'b'     ###
  # target distribution: log-posterior distribution of 'b' #
  
  n <- sum(mu_star_n_r)
  r <- length(mu_star_n_r)
  
  # prior distribution of b
  log_prior <- dgamma( b+a, shape=d_0_b, rate=d_1_b, log=T )
  
  # log-prior distribution of 'b' given 'a'
  log_lik <- 0
  log_lik <- log_lik + ( lgamma(x=b+1)-lgamma(x=b+n) )
  if(r>1) {
    log_lik <- log_lik + sum( log( b+a*(1:(r-1)) ) )
  }
  
  log_post <- log_lik + log_prior
  
  return(log_post)
}
