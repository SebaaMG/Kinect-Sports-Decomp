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
extern int fn_8268AF70();
extern int fn_82693E40();
extern int fn_82693FE8();
extern int fn_82694448();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


undefined4 * fn_82694548(int param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  char cVar3;
  undefined4 *puVar2;
  undefined4 *apuStack_50 [2];
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  
  uStack_48 = (int)param_2;
  uVar1 = fn_8268AF70(param_2,param_3,0x1505);
  uStack_44 = uVar1 & 0xffffff;
  uStack_40 = (int)param_3;
  cVar3 = fn_82694448(param_1,&uStack_48,apuStack_50);
  if (cVar3 == '\0') {
    puVar2 = (undefined4 *)fn_82693E40(param_1);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_1 + 0x18);
    }
    else {
      puVar2[2] = 0;
      puVar2[4] = (int)param_3;
      *puVar2 = (int)param_2;
      puVar2[3] = uVar1 & 0xffffff | param_4 | 0x40000000;
      puVar2[1] = 0;
      apuStack_50[0] = puVar2;
      fn_82693FE8(param_1,param_1,apuStack_50,puVar2[3]);
    }
  }
  else {
    apuStack_50[0][3] = apuStack_50[0][3] | param_4;
    puVar2 = apuStack_50[0];
  }
  return puVar2;
}

