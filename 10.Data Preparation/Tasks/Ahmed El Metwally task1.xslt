<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

  <xsl:output method="text"/>
  
  <xsl:template match="students">
    <xsl:text>Student ID,First Name,Last Name,Date of Birth&#10;</xsl:text>
    <xsl:apply-templates select="student"/>
  </xsl:template>

  <xsl:template match="student">
    <xsl:value-of select="@SID"/>
    <xsl:text>,</xsl:text>
    <xsl:value-of select="firstName"/>
    <xsl:text>,</xsl:text>
    <xsl:value-of select="lastName"/>
    <xsl:text>,</xsl:text>
    <xsl:value-of select="date"/>
    <xsl:text>&#10;</xsl:text>
  </xsl:template>

</xsl:stylesheet>
