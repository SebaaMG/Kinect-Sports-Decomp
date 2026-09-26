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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82306238(void)

{
  undefined8 in_r0;
  undefined1 in_vr0 [16];
  undefined1 auVar1 [16];
  undefined1 in_vr1 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  
  lbl_83265A28 = (lbl_83265A28 * 0x19660d + 0x3c6ef35f) * 0x19660d + 0x3c6ef35f;
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr12,4,3); memcpy(auVar1, &_vt0, 16); }
  vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr12,4,3);
  vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar1,3,2);
  return;
}

