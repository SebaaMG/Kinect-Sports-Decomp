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
extern int fn_82520218();
extern int fn_82F65FE0();
extern unsigned int lbl_82191418;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326C200;
extern unsigned int lbl_8326FA04;
extern unsigned int lbl_83274708;
extern unsigned int lbl_8327470C;
extern unsigned int lbl_83274710;
extern unsigned int lbl_83274714;
extern unsigned int lbl_83274718;
extern unsigned int lbl_8327471C;
extern unsigned int lbl_83274720;
extern unsigned int lbl_83274724;
extern unsigned int lbl_83274728;
extern unsigned int lbl_8327472C;
extern int (*lbl_8327F648)();
extern unsigned int lbl_8327F668;
extern unsigned int lbl_8327F66C;
extern unsigned int lbl_8327F670;
extern unsigned int lbl_8327F674;
extern unsigned int lbl_8327F678;
extern unsigned int lbl_8327F67C;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825996B0(void)

{
  undefined8 in_r0;
  int iVar1;
  undefined1 in_vr0 [16];
  undefined1 in_vr11 [16];
  undefined1 auVar2 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  
  fn_82F65FE0(0xffffffff831c14c8,0x33,8,0xffffffff8255c2d8);
  loadVectorLeftIndexed128(0xffffffff821ca45c,4);
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
  lbl_8327F668 = 0xff;
  vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr12,4,3);
  lbl_8327F670 = 0;{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr11,in_vr0,4,3); memcpy(auVar2, &_vt0, 16); }
  lbl_8327F66C = 0;
  lbl_8327F674 = 0;
  lbl_8327F678 = 0;lbl_8326C200 = (vectorRotateLeftImmediateMaskInsert128(in_vr0,auVar2,3,2).lo);
  if (lbl_8327F648 != (code *)0x0) {
    lbl_8327F674 = (*lbl_8327F648)();
  }
  lbl_8327F67C = 0;
  iVar1 = fn_82520218();
  if (iVar1 != 0) {
    lbl_8326FA04 = lbl_821916FC;
  }
  iVar1 = fn_82520218();
  if (iVar1 != 0) {
    lbl_8327472C = lbl_821CC160;
    lbl_83274724 = lbl_82191418;
    lbl_8327470C = 0;
    lbl_83274720 = lbl_821CC160;
    lbl_83274710 = 0;
    lbl_8327471C = lbl_821CC160;
    lbl_83274714 = 0;
    lbl_83274728 = lbl_821CC160;
    lbl_83274718 = 0;
    lbl_83274708 = 0;
  }
  return;
}

