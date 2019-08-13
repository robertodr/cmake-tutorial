with import <nixpkgs> {
  overlays = [(self: super:
    {
    }
  )];
};

stdenv.mkDerivation {
  name = "cmake-tutorial";
  buildInputs = [
    cmake
    gcc
    gfortran
    ninja
    pipenv
    python3Packages.pandas
    python3Packages.seaborn
  ];

  src = null;
  shellHook = ''
  SOURCE_DATE_EPOCH=$(date +%s)
  '';
}
