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
extern int fn_8265C940();
extern int fn_82BD7D68();
extern int fn_82BD8120();


longlong fn_82BD7E10(undefined4 param_1,undefined4 *param_2,undefined8 param_3,int *param_4,
                      undefined4 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar1 = (undefined4 *)fn_8265C940(param_2[4],0x648a0008);
  if (puVar1 == (undefined4 *)0x0) {
    lVar4 = -0x7ff8fff2;
  }
  else {
    *puVar1 = param_1;
    lVar4 = fn_82BD8120(param_3,puVar1 + 1);
    if (-1 < lVar4) {
      uVar2 = 0;
      puVar3 = puVar1 + 2;
      do {
        if (*param_4 != 0) {
          lVar4 = fn_82BD8120(*param_4,puVar3);
          if (lVar4 < 0) goto LAB_82bd7ed8;
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
        param_4 = param_4 + 1;
      } while (uVar2 < 2);
      puVar1[6] = param_2;
      if ((code *)*param_2 == (code *)0x0) {
        lVar4 = 1;
      }
      else {
        lVar4 = (*(code *)*param_2)(puVar1);
      }
      if (-1 < (int)lVar4) goto LAB_82bd7ee4;
    }
  }
LAB_82bd7ed8:
  fn_82BD7D68(puVar1);
  puVar1 = (undefined4 *)0x0;
LAB_82bd7ee4:
  *param_5 = puVar1;
  return lVar4;
}

