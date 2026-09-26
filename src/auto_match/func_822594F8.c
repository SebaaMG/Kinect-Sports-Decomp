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
extern unsigned int *auStack_30;
extern int fn_8223C610();
extern int fn_8223C680();
extern int fn_8265C9E0();
extern unsigned int uStack_2c;


void fn_822594F8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined1 uVar3;
  undefined1 *puVar2;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_30 [4];
  undefined1 uStack_2c;
  
  iVar1 = fn_8223C610(param_3,1,0,0);
  if (iVar1 == 0) {
    uVar5 = 0;
    do {
      iVar1 = fn_8223C610(param_3,1,0,0);
      if (iVar1 == 0) {
        uVar4 = 1;
        if (uVar5 != 4) {
          uVar4 = 8;
        }
        uVar3 = fn_8223C610(param_3,uVar4,0,0);
        auStack_30[uVar5] = uVar3;
      }
      else {
        auStack_30[uVar5] = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 5);
  }
  else {
    uStack_2c = 0;
  }
  if (param_4 != 0) {
    *(undefined4 *)(param_4 + 4) = 7;
    *(undefined4 *)(param_4 + 0xc) = 5;
    puVar2 = (undefined1 *)fn_8265C9E0(5);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined1 **)(param_4 + 8) = puVar2;
    fn_8223C680(param_4,0,auStack_30);
  }
  return;
}

