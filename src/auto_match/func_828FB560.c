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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_828F0170();
extern int fn_828FA0E0();
extern int fn_828FB270();
extern int fn_82F66A40();
extern int fn_82F68CC0();
extern unsigned int uStack_64;


char * fn_828FB560(int param_1,undefined1 *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  uint auStack_70 [2];
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [76];
  
  if ((((((*(uint *)(param_1 + 0x28) & 2) != 0) && (param_2 + 1 < *(undefined1 **)(param_1 + 4))) &&
       (iVar1 = fn_82F66A40(*param_2), iVar1 != 0)) &&
      ((iVar1 = fn_82F66A40(param_2[1]), iVar1 != 0 && (param_2 + 2 < *(char **)(param_1 + 4)))))
     && (param_2[2] == '.')) {
    iVar1 = fn_828FB270(param_1,param_2 + 3,auStack_70);
    if (((iVar1 != 0) && (auStack_70[0] < 0x100)) &&
       ((pcVar2 = param_2 + 3 + iVar1, pcVar2 < *(char **)(param_1 + 4) && (*pcVar2 == '.')))) {
      pcVar2 = pcVar2 + 1;
      iVar1 = fn_828FB270(param_1,pcVar2,auStack_70);
      if (iVar1 == 0) {
        iVar1 = fn_828FA0E0(param_1,pcVar2,auStack_70);
        if (iVar1 == 0) {
          return (char *)0x0;
        }
        auStack_70[0] = 0;
      }
      if ((auStack_70[0] < 0x100) &&
         (pcVar2 = pcVar2 + (iVar1 - (int)param_2), pcVar2 < (char *)0x20)) {
        fn_82F68CC0(auStack_50,param_2,pcVar2);
        auStack_50[(int)pcVar2] = 0;
        iVar1 = fn_828F0170(auStack_50,1,auStack_68);
        if (-1 < iVar1) {
          *param_3 = uStack_64;
          return pcVar2;
        }
      }
    }
  }
  return (char *)0x0;
}

