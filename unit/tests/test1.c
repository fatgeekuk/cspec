#include "../test_helper.h"
#include "../../src/vectors.c"

void test_vectors(){
	vec3 a, b, c, d;
	
	CONTEXT("Vectors")
		CONTEXT("initialisation")
			vec3Set(0.0, 0.0, 0.0, &a);
			expect(dblEqual(a.x, 0.0), "x should be zero!");
			expect(dblEqual(a.y, 0.0), "y should be zero!");
			expect(dblEqual(a.z, 0.0), "z should be zero!");
	
		NEXT_CONTEXT("instance methods")
			vec3Set(1.0, 2.0, 3.0, &a);
			vec3Set(2.0, 4.0, 6.0, &b);
	
			CONTEXT("COMPARISON")
				vec3Set(1.0, 2.0, 3.0, &c);
				expect(vec3Equal(&a, &c), "a should be equal to c");
				expect_not(vec3Equal(&a, &b), "a should not equal b");
		
			NEXT_CONTEXT("ADD")
				vec3Add(&a, &c, &d);
				expect(vec3Equal(&d, &b), "a+c does not equal b");
	
			NEXT_CONTEXT("SUB")
				vec3Sub(&b, &a, &d);
				expect(vec3Equal(&d, &c), "b-a does not equal c");
		
			NEXT_CONTEXT("SCALE")
				vec3Scale(2.0, &a, &b);
				expect(vec3Equal(&d, &a), "twice a does not equal b");
			END_CONTEXT
	
		END_CONTEXT
	END_CONTEXT
}