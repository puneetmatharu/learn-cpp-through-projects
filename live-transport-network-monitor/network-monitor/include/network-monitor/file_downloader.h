#ifndef FILE_DOWNLOADER_H
#define FILE_DOWNLOADER_H

// Regular libraries
#include <filesystem>
#include <string>

namespace NetworkMonitor
{
  //===========================================================================
  /*! \brief Download a file from a remote HTTPS URL.

     \param destination   The full path and filename of the output file. The
                          path to the file must exist.
     \param ca_cert_file  The path to a cacert.pem file to perform certificate
                          verification in an HTTPS connection.
  */
  //===========================================================================
  bool download_file(const std::string& file_url,
                     const std::filesystem::path& destination,
                     const std::filesystem::path& ca_cert_file= {});
}

#endif