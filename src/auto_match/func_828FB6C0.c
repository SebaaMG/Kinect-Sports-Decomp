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
extern int fn_828FA8D8();
extern int fn_828FAF58();


undefined8 fn_828FB6C0(uint *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (param_1[1] <= *param_1) {
    return 0;
  }
  do {
    pcVar4 = (char *)*param_1;
    cVar1 = *pcVar4;
    if (cVar1 == '\n') {
      pcVar4 = pcVar4 + 1;
      uVar5 = 1;
LAB_828fb894:
      *param_1 = (uint)pcVar4;
      param_1[7] = param_1[7] + 1;
    }
    else if ((cVar1 == ' ') || (('\b' < cVar1 && (cVar1 < '\x0e')))) {
      pcVar4 = pcVar4 + 1;
LAB_828fb8ac:
      *param_1 = (uint)pcVar4;
    }
    else {
      if (cVar1 == '/') {
        if (((char *)param_1[1] <= pcVar4 + 1) || (pcVar4[1] != '/')) {
          pcVar2 = (char *)param_1[1];
          if ((pcVar4 + 1 < pcVar2) && (pcVar4[1] == '*')) {
            *param_1 = (uint)(pcVar4 + 2);
            if (pcVar4 + 2 < pcVar2) {
              do {
                pcVar4 = (char *)*param_1;
                if (((*pcVar4 == '*') && (pcVar4 + 1 < pcVar2)) && (pcVar4[1] == '/')) break;
                if (*pcVar4 == '\n') {
                  param_1[7] = param_1[7] + 1;
                }
                *param_1 = (uint)(pcVar4 + 1);
              } while (pcVar4 + 1 < (char *)param_1[1]);
            }
            if ((char *)*param_1 < pcVar2) {
              pcVar4 = (char *)*param_1 + 2;
              goto LAB_828fb8ac;
            }
            fn_828FA8D8(param_1[0xc],param_1 + 2,0x3e9,0xffffffff820299a8);
            goto LAB_828fb8b0;
          }
          goto LAB_828fb808;
        }
        uVar3 = 1;
      }
      else {
LAB_828fb808:
        if (((param_1[10] & 2) == 0) || (cVar1 != ';')) {
          if (cVar1 != '\\') {
            return uVar5;
          }
          if ((pcVar4 + 1 < (char *)param_1[1]) && (pcVar4[1] == '\n')) {
            pcVar4 = pcVar4 + 2;
          }
          else {
            if ((char *)param_1[1] <= pcVar4 + 2) {
              return uVar5;
            }
            if (*(char *)(*param_1 + 1) != '\r') {
              return uVar5;
            }
            if (*(char *)(*param_1 + 2) != '\n') {
              return uVar5;
            }
            pcVar4 = (char *)(*param_1 + 3);
          }
          goto LAB_828fb894;
        }
        uVar3 = 0;
      }
      fn_828FAF58(param_1,uVar3);
    }
LAB_828fb8b0:
    if (param_1[1] <= *param_1) {
      return uVar5;
    }
  } while( true );
}

