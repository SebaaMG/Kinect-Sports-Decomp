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
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_83090D80(undefined8 param_1,int *param_2,longlong param_3,int *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  do {
    piVar4 = param_2;
    param_3 = param_3 + -1;
    if (param_3 < 1) {
      return;
    }
    uVar1 = *(ushort *)((int)piVar4 + 10);
    uVar2 = *(ushort *)(piVar4 + 6);
    piVar5 = piVar4 + 4;
    while (param_2 = piVar4 + 4, uVar2 < uVar1) {
      if ((((piVar4[1] - *piVar5 | piVar5[1] - *piVar4) & 0x80008000U) == 0) &&
         ((piVar5[3] & 1U) == 0)) {
        iVar6 = fn_82CE5410();
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),param_4,8);
        }
        iVar6 = *param_4;
        iVar3 = param_4[1] * 8;
        param_4[1] = param_4[1] + 1;
        *(int *)(iVar3 + iVar6) = piVar4[3];
        *(int *)(iVar3 + iVar6 + 4) = piVar5[3];
      }
      uVar2 = *(ushort *)(piVar5 + 6);
      piVar5 = piVar5 + 4;
    }
  } while( true );
}

