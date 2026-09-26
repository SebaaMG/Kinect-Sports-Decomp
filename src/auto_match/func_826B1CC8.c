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
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826A73B0();
extern int fn_826B0B48();
extern unsigned int lbl_82007798;


undefined4 * fn_826B1CC8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *apuStack_20 [2];
  
  puVar1 = (undefined4 *)fn_8267B890(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x288),0x48,0)
  ;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar2 = fn_826A73B0(param_1);
    puVar1[1] = uVar2;
    puVar1[2] = 1;
    *puVar1 = &lbl_82007798;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined1 *)(puVar1 + 0xe) = 0;
  }
  apuStack_20[0] = puVar1;
  fn_826B0B48(param_1 + 200,apuStack_20);
  if (puVar1 != (undefined4 *)0x0) {
    fn_826824B0(puVar1);
  }
  return puVar1;
}

