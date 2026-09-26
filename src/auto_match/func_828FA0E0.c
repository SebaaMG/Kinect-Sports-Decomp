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
extern int fn_829301D0();
extern int fn_82F66A40();
extern int fn_82F66AE0();
extern int fn_82F68CC0();


uint fn_828FA0E0(int param_1,char *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  
  if ((*(char **)(param_1 + 4) <= param_2) ||
     (((iVar1 = fn_82F66A40(*param_2), pcVar5 = param_2, iVar1 == 0 && (*param_2 != '_')) &&
      ((*(int *)(param_1 + 0x34) == 0 ||
       (((*(uint *)(param_1 + 0x28) & 4) != 0 || (iVar1 = fn_82F66AE0(*param_2), iVar1 == 0)))))
      ))) {
    return 0;
  }
LAB_828fa174:
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar3 + 1;
    if (pcVar5 < *(char **)(param_1 + 4)) {
      iVar1 = fn_82F66AE0(*pcVar5);
      if ((iVar1 != 0) || (*pcVar5 == '_')) goto LAB_828fa174;
    }
    pcVar2 = pcVar3 + 3;
    if ((((*(char **)(param_1 + 4) <= pcVar2) || ((*pcVar5 != ':' || (pcVar3[2] != ':')))) ||
        ((iVar1 = fn_82F66AE0(*pcVar2), iVar1 == 0 && (*pcVar2 != '_')))) ||
       (pcVar5 = pcVar2, *(char **)(param_1 + 4) <= pcVar2)) {
      uVar4 = (int)pcVar5 - (int)param_2;
      if (uVar4 + 1 < uVar4) {
        return 0;
      }
      iVar1 = fn_829301D0(*(undefined4 *)(param_1 + 0x2c),uVar4 + 1,1);
      if (iVar1 == 0) {
        return 0;
      }
      fn_82F68CC0(iVar1,param_2,uVar4);
      *(undefined1 *)(iVar1 + uVar4) = 0;
      *param_3 = iVar1;
      return uVar4;
    }
  } while( true );
}

