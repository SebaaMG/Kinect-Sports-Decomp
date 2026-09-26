typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_828FAB00();


undefined8 fn_828FAF58(uint *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_1 < param_1[1]) {
    do {
      pcVar2 = (char *)*param_1;
      cVar1 = *pcVar2;
      if (cVar1 == '\n') {
        return 1;
      }
      if (cVar1 == '\\') {
        if ((pcVar2 + 1 < (char *)param_1[1]) && (pcVar2[1] == '\n')) {
          if (param_2 != 0) {
            fn_828FAB00(param_1[0xc],param_1 + 2,0x41a,0xffffffff820298b8);
          }
          uVar4 = *param_1 + 2;
        }
        else {
          if (((char *)param_1[1] <= pcVar2 + 2) || ((pcVar2[1] != '\r' || (pcVar2[2] != '\n'))))
          goto LAB_828fb04c;
          if (param_2 != 0) {
            fn_828FAB00(param_1[0xc],param_1 + 2,0x41a,0xffffffff820298b8);
          }
          uVar4 = *param_1 + 3;
        }
        *param_1 = uVar4;
        param_1[7] = param_1[7] + 1;
      }
      else {
LAB_828fb04c:
        if ((param_2 == 0) &&
           (((cVar1 == '/' && (pcVar2 + 1 < (char *)param_1[1])) && (pcVar2[1] == '/')))) {
          iVar3 = 2;
          param_2 = 1;
        }
        else {
          iVar3 = 1;
        }
        *param_1 = (uint)(pcVar2 + iVar3);
      }
    } while (*param_1 < param_1[1]);
  }
  return 0;
}

