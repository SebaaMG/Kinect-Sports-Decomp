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
extern int fn_82F63BA0();
extern int fn_82F68240();


undefined4 fn_82F66368(char *param_1,int param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  if ((param_4 & 0xffffffff) == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 != 0) goto LAB_82f663bc;
    }
    else {
LAB_82f663b4:
      if (param_2 == 0) goto LAB_82f663bc;
      if ((param_4 & 0xffffffff) == 0) {
        *param_1 = '\0';
      }
      else {
        if (param_3 == (char *)0x0) {
          *param_1 = '\0';
          puVar2 = (undefined4 *)fn_82F68240();
          uVar6 = 0x16;
LAB_82f66400:
          *puVar2 = uVar6;
          fn_82F63BA0();
          return uVar6;
        }
        iVar3 = param_2;
        if ((int)param_4 == -1) {
          iVar4 = (int)param_1 - (int)param_3;
          do {
            cVar1 = *param_3;
            param_3[iVar4] = cVar1;
            param_3 = param_3 + 1;
            if (cVar1 == '\0') break;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        else {
          pcVar5 = param_1;
          do {
            cVar1 = pcVar5[(int)param_3 - (int)param_1];
            *pcVar5 = cVar1;
            pcVar5 = pcVar5 + 1;
            if ((cVar1 == '\0') || (iVar3 = iVar3 + -1, iVar3 == 0)) break;
            param_4 = param_4 - 1;
          } while (param_4 != 0);
          if ((param_4 & 0xffffffff) == 0) {
            *pcVar5 = '\0';
          }
        }
        if (iVar3 == 0) {
          if ((int)param_4 == -1) {
            param_1[param_2 + -1] = '\0';
            return 0x50;
          }
          *param_1 = '\0';
          puVar2 = (undefined4 *)fn_82F68240();
          uVar6 = 0x22;
          goto LAB_82f66400;
        }
      }
    }
    uVar6 = 0;
  }
  else {
    if (param_1 != (char *)0x0) goto LAB_82f663b4;
LAB_82f663bc:
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar6 = 0x16;
  }
  return uVar6;
}

