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
extern int fn_82522DF8();
extern int fn_8253D1C0();
extern int fn_82599308();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int lbl_82193A34;
extern unsigned int lbl_8326C3A0;
extern unsigned int lbl_83296E24;


void fn_8253D030(double param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (((*(int *)(param_2 + 0x44) != 0) && (*(int *)(param_3 + 0x1f8) != 0)) &&
     (*(int *)(param_2 + 0xf0) != 0)) {
    fn_8253D1C0();
    *(undefined4 *)(param_2 + 0xf0) = 0;
    *(undefined4 *)(param_2 + 0x10) = lbl_8326C3A0;
    puVar1 = (undefined4 *)fn_82599308();
    *puVar1 = 3;
    puVar1 = (undefined4 *)fn_82522DF8(0x40);
    *puVar1 = 4;
    fn_82A1BB18();
    uVar2 = fn_8259A230();
    puVar1[6] = (float)param_1;
    puVar1[1] = uVar2;
    puVar1[2] = 3;
    puVar1[7] = lbl_82193A34;
    puVar1[4] = *(undefined4 *)(param_2 + 0xc);
    puVar1[5] = *(undefined4 *)(param_2 + 0x10);
    puVar1[3] = *(undefined4 *)(param_2 + 8);
    sync(1);
    fn_82BFE128(lbl_83296E24,puVar1);
  }
  return;
}

