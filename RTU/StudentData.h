#pragma once

using namespace System;

public ref class StudentData {

	private:
		String^ Surname;
		String^ Givenname;
		String^ Middlename;
		String^ Gender;
		String^ Strand;
		String^ Track;
		String^ LRN;
		String^ Campus;
		String^ Course;


	public:
		void setCredentials(String^ aSurname, String^ aGivenname, String^ aMiddlename, String^ aGender, String^ aStrand, String^ aTrack, String^ aLRN, String^ aCampus, String^ aCourse ) {

			Surname = aSurname;
			Givenname = aGivenname;
			Middlename = aMiddlename;
			Gender = aGender;
			Strand = aStrand;
			Track = aTrack;
			LRN = aLRN;
			Campus = aCampus;
			Course = aCourse;

		}


		String^ getSurname() {
			return Surname;
		}
		String^ getGivenname() {
			return Givenname;
		}
		String^ getMiddlename() {
			return Middlename;
		}
		String^ getFullname() {
			return Surname + " " + Givenname + " " + Middlename;
		}
		String^ getGender() {
			return Gender;
		}
		String^ getStrand() {
			return Strand;
		}
		String^ getTrack() {
			return Track;
		}
		String^ getLRN() {
			return LRN;
		}
		String^ getCampus() {
			return Campus;
		}
		String^ getCourse() {
			return Course;
		}
};