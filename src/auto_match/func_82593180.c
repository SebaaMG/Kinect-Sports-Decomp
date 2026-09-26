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
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82593180(void)

{
  undefined8 in_r0;
  undefined1 in_vr0 [16];
  undefined1 in_vr5 [16];
  undefined1 in_vr6 [16];
  undefined1 auVar1 [16];
  undefined1 in_vr7 [16];
  undefined1 auVar2 [16];
  undefined1 in_vr8 [16];
  undefined1 auVar3 [16];
  undefined1 in_vr9 [16];
  undefined1 in_vr10 [16];
  undefined1 auVar4 [16];
  undefined1 in_vr11 [16];
  undefined1 in_vr12 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_vr13 [16];
  undefined1 auVar7 [16];
  
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
  loadVectorLeftIndexed128(0xffffffff821ca45c,4);
  loadVectorLeftIndexed128(0xffffffff82192730,4);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr11,4,3); memcpy(auVar5, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr7,in_vr0,4,3); memcpy(auVar2, &_vt2, 16); }{ V16 _vt3 = vectorRotateLeftImmediateMaskInsert128(in_vr8,in_vr0,4,3); memcpy(auVar3, &_vt3, 16); }{ V16 _vt4 = vectorRotateLeftImmediateMaskInsert128(in_vr6,in_vr9,4,3); memcpy(auVar1, &_vt4, 16); }
  loadVectorLeftIndexed128(0xffffffff82191558,0x5c);
  vectorRotateLeftImmediateMaskInsert128(auVar7,auVar7,3,2);
  vectorRotateLeftImmediateMaskInsert128(auVar3,auVar7,3,2);
  vectorRotateLeftImmediateMaskInsert128(auVar5,auVar7,3,2);
  vectorRotateLeftImmediateMaskInsert128(auVar2,auVar7,3,2);
  vectorRotateLeftImmediateMaskInsert128(auVar1,auVar7,3,2);
  loadVectorLeftIndexed128(0xffffffff82193c20,0xa0);{ V16 _vt5 = vectorRotateLeftImmediateMaskInsert128(in_vr10,in_vr11,4,3); memcpy(auVar4, &_vt5, 16); }
  vectorRotateLeftImmediateMaskInsert128(auVar7,auVar5,3,2);{ V16 _vt6 = vectorRotateLeftImmediateMaskInsert128(auVar5,in_vr0,4,3); memcpy(auVar6, &_vt6, 16); }{ V16 _vt7 = vectorRotateLeftImmediateMaskInsert128(in_vr5,in_vr9,4,3); memcpy(auVar1, &_vt7, 16); }{ V16 _vt8 = vectorRotateLeftImmediateMaskInsert128(in_vr11,auVar7,4,3); memcpy(auVar5, &_vt8, 16); }
  vectorRotateLeftImmediateMaskInsert128(auVar4,auVar4,3,2);
  vectorRotateLeftImmediateMaskInsert128(auVar7,auVar3,3,2);
  vectorRotateLeftImmediateMaskInsert128(auVar1,auVar2,3,2);
  vectorRotateLeftImmediateMaskInsert128(auVar7,auVar2,3,2);
  vectorRotateLeftImmediateMaskInsert128(auVar6,auVar6,3,2);
  vectorRotateLeftImmediateMaskInsert128(auVar5,auVar5,3,2);
  return;
}

