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
extern unsigned int lbl_83297140;
extern unsigned int lbl_83297150;
extern unsigned int lbl_83297160;
extern unsigned int lbl_83297170;
extern unsigned int lbl_83297180;
extern unsigned int uRam83297154;
extern unsigned int uRam83297158;
extern unsigned int uRam8329715c;
extern unsigned int uRam83297164;
extern unsigned int uRam83297168;
extern unsigned int uRam8329716c;
extern unsigned int uRam83297174;
extern unsigned int uRam83297178;
extern unsigned int uRam8329717c;
extern unsigned int uRam83297184;
extern unsigned int uRam83297188;
extern unsigned int uRam8329718c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_831271D8(void)

{
  undefined4 *puVar1;
  int in_r0;
  undefined4 in_register_00010440;
  undefined4 in_register_00010444;
  undefined4 in_register_00010448;
  undefined4 in_vr68;
  undefined4 in_register_00010460;
  undefined4 in_register_00010464;
  undefined4 in_register_00010468;
  undefined4 in_vr70;
  undefined4 in_register_00010470;
  undefined4 in_register_00010474;
  undefined4 in_register_00010478;
  undefined4 in_vr71;
  undefined4 in_register_00010490;
  undefined4 in_register_00010494;
  undefined4 in_register_00010498;
  undefined4 in_vr73;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  puVar1 = (undefined4 *)((uint)(&lbl_83297140 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  lbl_83297150 = in_register_00010490;
  uRam83297154 = in_register_00010494;
  uRam83297158 = in_register_00010498;
  uRam8329715c = in_vr73;
  lbl_83297160 = in_register_00010460;
  uRam83297164 = in_register_00010464;
  uRam83297168 = in_register_00010468;
  uRam8329716c = in_vr70;
  lbl_83297170 = in_register_00010470;
  uRam83297174 = in_register_00010474;
  uRam83297178 = in_register_00010478;
  uRam8329717c = in_vr71;
  lbl_83297180 = in_register_00010440;
  uRam83297184 = in_register_00010444;
  uRam83297188 = in_register_00010448;
  uRam8329718c = in_vr68;
  return;
}

