{
  description = "42sh";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-23.05";
    utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, utils }:
    utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
      in
      {
        formatter = pkgs.nixpkgs-fmt;
        devShell = pkgs.mkShell {
          hardeningDisable = [ "all" ];
          packages = with pkgs; [
            gcc
            clang

            gnumake

            valgrind

            criterion
            python3Packages.gcovr
            python311
          ];
        };
      });
}