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
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696AD0();
extern int fn_8271FDB0();


void fn_827204A8(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    uVar3 = fn_82696AD0(uVar3,uVar1);
    fn_8271FDB0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),uVar3);
    puVar2 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar2);
    *puVar2 = 2;
    puVar2[4] = 1;
  }
  return;
}

