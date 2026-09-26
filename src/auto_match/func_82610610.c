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
extern int fn_8257E950();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82610610(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined8 in_r0;
  undefined1 in_vr0 [16];
  undefined1 auVar2 [16];
  undefined1 in_vr1 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  
  if ((param_5 == 0) && ((param_3 & 0xffffffff) != 0)) {
    iVar1 = (int)param_3;
    loadVectorLeftIndexed128(param_3,0x18);
    loadVectorLeftIndexed128(param_3,0x14);
    vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3);
    loadVectorLeftIndexed128(param_3,0x1c);
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr12,4,3); memcpy(auVar2, &_vt0, 16); }
    vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar2,3,2);
    fn_8257E950((double)*(float *)(iVar1 + 0x24),(double)*(float *)(iVar1 + 0x28),
                      **(undefined4 **)(param_1 + 0x60),*(undefined4 *)(iVar1 + 0x10),
                      *(undefined4 *)(iVar1 + 0x20),0xffffffff821cc160,0x14,
                      *(undefined4 *)(iVar1 + 0x2c),*(undefined4 **)(param_1 + 0x60),0x18);
  }
  return;
}

