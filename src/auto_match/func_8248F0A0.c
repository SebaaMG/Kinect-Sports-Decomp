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
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_8248F390();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_8248F0A0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_40;
  int iStack_3c;
  
  iVar1 = (int)param_1;
  if (8 < (int)(param_2 - iVar1 & 0xfffffff8U)) {
    puVar2 = (undefined4 *)(param_2 + -8);
    do {
      uStack_40 = 0;
      iStack_3c = 0;
      if (&uStack_40 != puVar2) {
        iStack_3c = puVar2[1];
        puVar2[1] = 0;
        uStack_40 = *puVar2;
        *puVar2 = 0;
      }
      fn_823F2E20(puVar2,param_1);
      fn_8248F390(param_1,0,(int)puVar2 - iVar1 >> 3,&uStack_40,param_3);
      if (iStack_3c != 0) {
        fn_822315A0();
      }
      puVar2 = puVar2 + -2;
    } while (8 < (int)((8 - iVar1) + (int)puVar2 & 0xfffffff8U));
  }
  return;
}

