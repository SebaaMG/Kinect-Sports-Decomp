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
extern int fn_8265CA20();
extern int fn_8266C8F0();
extern int fn_82F622A8();


void fn_82834F10(int *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if ((param_2 & 0xffffffff) < 0x15555556) {
    if ((ulonglong)(uint)((param_1[2] - *param_1) / 0xc) < (param_2 & 0xffffffff)) {
      puVar2 = (undefined4 *)fn_8266C8F0(param_2,0);
      puVar1 = (undefined4 *)param_1[1];
      puVar3 = puVar2;
      for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar1; puVar6 = puVar6 + 3) {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar6;
          puVar3[1] = puVar6[1];
          puVar3[2] = puVar6[2];
        }
        puVar3 = puVar3 + 3;
      }
      iVar5 = *param_1;
      iVar4 = param_1[1] - iVar5;
      if (iVar5 != 0) {
        for (; iVar5 != param_1[1]; iVar5 = iVar5 + 0xc) {
        }
        fn_8265CA20();
      }
      *param_1 = (int)puVar2;
      param_1[2] = (int)(puVar2 + (int)param_2 * 3);
      param_1[1] = (int)(puVar2 + (iVar4 / 0xc) * 3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F622A8(0xffffffff82196fd4);
}

