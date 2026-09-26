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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


undefined4 fn_830040C0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  iVar1 = param_1[2];
  puVar4 = (undefined4 *)fn_82FA5060(lbl_831BC768,(param_2 + iVar1) * 8);
  uVar3 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    iVar2 = param_1[1] - *param_1 >> 3;
    lVar8 = (longlong)iVar2;
    if (*param_1 != 0) {
      if (iVar2 != 0) {
        iVar6 = 0;
        puVar7 = puVar4;
        do {
          if (puVar7 != (undefined4 *)0x0) {
            *(undefined2 *)(puVar7 + 1) = 0;
            *(undefined2 *)((int)puVar7 + 6) = 0;
          }
          lVar8 = lVar8 + -1;
          puVar5 = (undefined4 *)(iVar6 + *param_1);
          iVar6 = iVar6 + 8;
          *puVar7 = *puVar5;
          puVar7[1] = puVar5[1];
          puVar7 = puVar7 + 2;
        } while (lVar8 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = (int)puVar4;
    param_1[2] = param_2 + iVar1;
    uVar3 = 1;
    param_1[1] = (int)(puVar4 + iVar2 * 2);
  }
  return uVar3;
}

