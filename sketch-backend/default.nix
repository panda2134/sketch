{ stdenv, autoreconfHook, fetchFromGitHub, bash, gsl, flex, bison }:
stdenv.mkDerivation {
  name = "sketch-backend";
  version = "1.7.6";
  #src = fetchFromGitHub {
  #  owner  = "asolarlez";
  #  repo   = "sketch-backend";
  #  rev    = "1d5e923ebf0b54ed03b3274434f5c7164fb22adb";
  #  hash  = "sha256-LkAs9yv0xWYMEUoCBEzeSVcbMPq8jSPstQHFpbrdmX8=";
  #};
  src = ./.;
  nativeBuildInputs = [ bash autoreconfHook ];
  buildInputs = [ flex bison gsl ];
}
