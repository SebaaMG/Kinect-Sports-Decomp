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
extern int fn_8267BED0();
extern int fn_82716330();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1c;


undefined4 * fn_82757058(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = 0x102;
  puVar3 = (undefined4 *)fn_8267BED0(param_1,0x28,&uStack_1c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar2 = lbl_821AAD20;
    puVar3[3] = 0;
    puVar3[4] = 0;
    uVar1 = lbl_82002AE0;
    puVar3[7] = uVar2;
    puVar3[6] = uVar2;
    *(undefined2 *)(puVar3 + 9) = 0;
    puVar3[8] = uVar1;
  }
  if (puVar3 != (undefined4 *)0x0) {
    puStack_20 = puVar3;
    fn_82716330(param_1,&puStack_20);
  }
  return puVar3;
}

