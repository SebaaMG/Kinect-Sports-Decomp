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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82545160();
extern int fn_8257F5C0();
extern int fn_828389E0();
extern int fn_8284C850();
extern int fn_8284C858();
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825E4D88(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 in_r0;
  ulonglong uVar2;
  undefined1 in_vr0 [16];
  undefined1 auVar3 [16];
  undefined1 in_vr1 [16];
  undefined1 in_vr2 [16];
  undefined1 in_vr10 [16];
  undefined1 in_vr11 [16];
  undefined1 in_vr12 [16];
  undefined1 auVar4 [16];
  undefined1 in_vr13 [16];
  
  uVar1 = lbl_821CC160;
  uVar2 = ZEXT48(&stack0x00000000);
  fn_8284C858();
  fn_8284C850(param_2);
  loadVectorLeftIndexed128(param_3,4);
  loadVectorLeftIndexed128(in_r0,param_3);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr13,4,3); memcpy(auVar3, &_vt0, 16); }
  loadVectorLeftIndexed128(in_r0,uVar2 - 0xa0);
  loadVectorLeftIndexed128(in_r0,uVar2 - 0x98);
  loadVectorLeftIndexed128(0xffffffff821ca45c,4);
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
  vectorRotateLeftImmediateMaskInsert128(auVar3,in_vr13,4,3);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr11,4,3); memcpy(auVar4, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr10,in_vr11,4,3); memcpy(auVar3, &_vt2, 16); }
  vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar3,3,2);
  vectorRotateLeftImmediateMaskInsert128(in_vr2,auVar4,3,2);
  fn_8257F5C0(uVar2 - 0x80,CONCAT44(uVar1,(float)param_1),(ulonglong)uVar1 << 0x20,param_5,
                    uVar1,uVar2 - 0xa0,0xffffffff821ca45c,uVar2 - 0x98);
  fn_828389E0(param_2,0,param_7);
  fn_82545160(param_6,uVar2 - 0x80);
  return;
}

