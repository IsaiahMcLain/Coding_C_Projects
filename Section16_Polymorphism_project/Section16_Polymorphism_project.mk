##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Section16_Polymorphism_project
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/isaia/Documents/Section16_Polymorphism
ProjectPath            :=C:/Users/isaia/Documents/Section16_Polymorphism/Section16_Polymorphism_project
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=isaia
Date                   :=04/10/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Section16_Polymorphism_project.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/mingw-w64/mingw64/bin/windres.exe"
LinkOptions            :=  -static
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files/mingw-w64/mingw64/bin/ar.exe" rcu
CXX      := "C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
CC       := "C:/Program Files/mingw-w64/mingw64/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/mingw-w64/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Trust_Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Savings_Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_i_printable.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account_Utilitiy.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Checking_Account.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Trust_Account.cpp$(ObjectSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Trust_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Trust_Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Trust_Account.cpp$(DependSuffix) -MM ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Trust_Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/isaia/Documents/Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Trust_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Trust_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Trust_Account.cpp$(PreprocessSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Trust_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Trust_Account.cpp$(PreprocessSuffix) ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Trust_Account.cpp

$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Savings_Account.cpp$(ObjectSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Savings_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Savings_Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Savings_Account.cpp$(DependSuffix) -MM ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Savings_Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/isaia/Documents/Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Savings_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Savings_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Savings_Account.cpp$(PreprocessSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Savings_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Savings_Account.cpp$(PreprocessSuffix) ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Savings_Account.cpp

$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_main.cpp$(ObjectSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_main.cpp$(DependSuffix) -MM ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/isaia/Documents/Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_main.cpp$(PreprocessSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_main.cpp$(PreprocessSuffix) ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/main.cpp

$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_i_printable.cpp$(ObjectSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/i_printable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_i_printable.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_i_printable.cpp$(DependSuffix) -MM ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/i_printable.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/isaia/Documents/Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/i_printable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_i_printable.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_i_printable.cpp$(PreprocessSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/i_printable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_i_printable.cpp$(PreprocessSuffix) ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/i_printable.cpp

$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account.cpp$(ObjectSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account.cpp$(DependSuffix) -MM ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/isaia/Documents/Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account.cpp$(PreprocessSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account.cpp$(PreprocessSuffix) ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Account.cpp

$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account_Utilitiy.cpp$(ObjectSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Account_Utilitiy.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account_Utilitiy.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account_Utilitiy.cpp$(DependSuffix) -MM ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Account_Utilitiy.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/isaia/Documents/Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Account_Utilitiy.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account_Utilitiy.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account_Utilitiy.cpp$(PreprocessSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Account_Utilitiy.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Account_Utilitiy.cpp$(PreprocessSuffix) ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Account_Utilitiy.cpp

$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Checking_Account.cpp$(ObjectSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Checking_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Checking_Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Checking_Account.cpp$(DependSuffix) -MM ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Checking_Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/isaia/Documents/Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Checking_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Checking_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Checking_Account.cpp$(PreprocessSuffix): ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Checking_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_Section_15_Inheritance_Project_Section_15_Inheritance_Project_WorkSpace_Checking_Account.cpp$(PreprocessSuffix) ../../Section_15_Inheritance_Project/Section_15_Inheritance_Project_WorkSpace/Checking_Account.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


